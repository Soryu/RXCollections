//  L3AssertionReference.h
//  Created by Rob Rix on 2012-11-11.
//  Copyright (c) 2012 Rob Rix. All rights reserved.

#import <Foundation/Foundation.h>

@interface L3AssertionReference : NSObject <NSCopying>

+(instancetype)assertionReferenceWithFile:(NSString *)file line:(NSUInteger)line subjectSource:(NSString *)subjectSource patternSource:(NSString *)patternSource;

@property (copy, nonatomic, readonly) NSString *file;
@property (assign, nonatomic, readonly) NSUInteger line;

@property (copy, nonatomic, readonly) NSString *subjectSource;
@property (copy, nonatomic, readonly) NSString *patternSource;

@end
