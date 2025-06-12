print(f"\n{chr(27)}[1;34mIniciando cálculo de distância Levenshtein{chr(27)}[0m")
print(f"{chr(27)}[1;32m========================================================={chr(27)}[0m")

# Primeiro par
p1 = "casulo"
p2 = "casa"

# Diferença entre p1 e p2 = 0 distância
print(f"| A distancia entre '{p1}' e '{p2}' é {cal_distance(p1, p2)}")


# Segundo par
p3 = "livro"
p4 = "livraria"

# Diferença entre p3 e p4 = 1 distância
print(f"| A distancia entre '{p3}' e '{p4}' é {cal_distance(p3, p4)}")


# Terceiro par
p5 = "mauro"
p6 = "oruam"

# Diferença entre p5 e p6 = 1 distância
print(f"| A distancia entre '{p5}' e '{p6}' é {cal_distance(p5, p6)}")


# Quarto par
p7 = "martelo"
p8 = "marcelo"

# Diferença entre p7 e p8 = 2 distância
print(f"| A distancia entre '{p7}' e '{p8}' é {cal_distance(p7, p8)}")


# Quinto par
p9 = "azul"
p10 = "vermelho"

# Diferença entre p9 e p10 = 7 distância
print(f"| A distancia entre '{p9}' e '{p10}' é {cal_distance(p9, p10)}")
print(f"{chr(27)}[1;32m========================================================={chr(27)}[0m")
