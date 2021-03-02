/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNEither, NSError;

@interface CNResult : NSObject {

	CNEither* _either;

}

@property (readonly) CNEither * either;                 //@synthesize either=_either - In the implementation block
@property (readonly) id value; 
@property (copy,readonly) NSError * error; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isFailure; 
+(id)resultWithFuture:(id)arg1 ;
+(id)resultWithValue:(id)arg1 orError:(id)arg2 ;
+(id)resultWithBlock:(/*^block*/id)arg1 ;
+(id)successWithValue:(id)arg1 ;
+(id)failureWithError:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(BOOL)isSuccess;
-(id)value;
-(NSError *)error;
-(id)recover:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)valueWithError:(id*)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isFailure;
-(CNEither *)either;
-(id)flatMap:(/*^block*/id)arg1 ;
-(id)initWithValue:(id)arg1 error:(id)arg2 ;
@end
