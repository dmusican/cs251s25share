(define x 3)

(define fun1
  (lambda ()
    (let ((x 4))
      (fun2))))

(define fun2
  (lambda ()
    (display x)))

(fun1)
