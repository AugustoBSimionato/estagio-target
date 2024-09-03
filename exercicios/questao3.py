import json
from statistics import mean

def carregar_dados(arquivo):
    with open(arquivo, 'r') as f:
        return json.load(f)

def analisar_faturamento(dados):
    faturamento_valido = [dia['valor'] for dia in dados if dia['valor'] > 0]
    
    menor_valor = min(faturamento_valido)
    maior_valor = max(faturamento_valido)
    
    media = mean(faturamento_valido)
    dias_acima_media = sum(1 for valor in faturamento_valido if valor > media)
    
    return menor_valor, maior_valor, dias_acima_media

def main():
    arquivo = 'dados.json'
    dados = carregar_dados(arquivo)
    
    menor, maior, dias_acima = analisar_faturamento(dados)
    
    print(f"Menor valor de faturamento: R$ {menor:.2f}")
    print(f"Maior valor de faturamento: R$ {maior:.2f}")
    print(f"Numero de dias com faturamento acima da media: {dias_acima}")

if __name__ == "__main__":
    main()