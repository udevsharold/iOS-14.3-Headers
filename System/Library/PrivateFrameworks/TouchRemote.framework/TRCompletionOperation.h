/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@interface TRCompletionOperation : TROperation {

	BOOL _success;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL success;                     //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(void)execute;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)success;
@end

