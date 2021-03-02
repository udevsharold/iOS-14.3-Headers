/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItemChangeTransaction.h>

@class EKEvent;

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction {

	EKEvent* _mutableEvent;

}

@property (nonatomic,readonly) EKEvent * mutableEvent;              //@synthesize mutableEvent=_mutableEvent - In the implementation block
-(id)initWithContentItem:(id)arg1 ;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 isNew:(BOOL)arg2 ;
-(EKEvent *)mutableEvent;
@end
