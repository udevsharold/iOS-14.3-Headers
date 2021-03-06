/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPointerFunctions : NSObject <NSCopying>

@property (assign) /*function pointer*/void* hashFunction; 
@property (assign) /*function pointer*/void* isEqualFunction; 
@property (assign) /*function pointer*/void* sizeFunction; 
@property (assign) /*function pointer*/void* descriptionFunction; 
@property (assign) /*function pointer*/void* relinquishFunction; 
@property (assign) /*function pointer*/void* acquireFunction; 
@property (assign) BOOL usesStrongWriteBarrier; 
@property (assign) BOOL usesWeakReadAndWriteBarriers; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pointerFunctionsWithOptions:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)setUsesStrongWriteBarrier:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)usesStrongWriteBarrier;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)isEqualFunction;
-(/*function pointer*/void*)sizeFunction;
-(/*function pointer*/void*)hashFunction;
-(void)setDescriptionFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)acquireFunction;
-(void)setAcquireFunction:(/*function pointer*/void*)arg1 ;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)relinquishFunction;
-(BOOL)usesWeakReadAndWriteBarriers;
-(/*function pointer*/void*)descriptionFunction;
-(void)setSizeFunction:(/*function pointer*/void*)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1 ;
@end

