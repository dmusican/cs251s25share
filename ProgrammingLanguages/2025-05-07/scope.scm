(define x 1)

(define fun1
  (lambda ()
    (let ((x 2))
      (fun2))))

(define fun2
  (lambda ()
    (display x)))

(fun1)
