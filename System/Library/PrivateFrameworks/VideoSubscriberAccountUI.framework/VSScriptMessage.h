/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSScriptSecurityOrigin;

@interface VSScriptMessage : NSObject {

	NSString* _body;
	VSScriptSecurityOrigin* _source;
	VSScriptSecurityOrigin* _target;

}

@property (nonatomic,copy) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) VSScriptSecurityOrigin * target;              //@synthesize target=_target - In the implementation block
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(VSScriptSecurityOrigin *)target;
-(id)description;
-(void)setTarget:(VSScriptSecurityOrigin *)arg1 ;
-(VSScriptSecurityOrigin *)source;
-(void)setSource:(VSScriptSecurityOrigin *)arg1 ;
@end

