/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFNotificationActionAlert : NSObject {

	NSString* _title;
	NSString* _body;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;               //@synthesize body=_body - In the implementation block
-(NSString *)body;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 body:(id)arg2 ;
@end

