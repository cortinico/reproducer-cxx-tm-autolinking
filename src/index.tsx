const ReproducerCxxTmAutolinking = require('./NativeReproducerCxxTmAutolinking').default;

export function multiply(a: number, b: number): number {
  return ReproducerCxxTmAutolinking.multiply(a, b);
}
