/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSError.h>
@class NSString;


@protocol VSJSError <JSExport>
@property (assign,nonatomic) unsigned long long code; 
@property (nonatomic,copy) NSString * message; 
@required
-(unsigned long long)code;
-(NSString *)message;
-(id)init;
-(void)setCode:(unsigned long long)arg1;
-(void)setMessage:(id)arg1;

@end


@class NSString;

@interface VSJSError : IKJSObject <VSJSError> {

	unsigned long long _code;
	NSString* _message;

}

@property (assign,nonatomic) unsigned long long code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSString * message;                     //@synthesize message=_message - In the implementation block
-(unsigned long long)code;
-(NSString *)message;
-(id)error;
-(id)init;
-(void)setCode:(unsigned long long)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(id)description;
@end

