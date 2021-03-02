/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface _AAURLSessionOperation : NSObject {

	NSMutableData* _mutableData;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(id)operationWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(NSData *)data;
-(id)completion;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)appendData:(id)arg1 ;
-(void)invokeCompletionWithResponse:(id)arg1 error:(id)arg2 ;
@end
