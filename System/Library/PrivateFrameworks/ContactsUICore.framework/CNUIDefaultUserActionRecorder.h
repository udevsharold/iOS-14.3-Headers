/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionRecorder.h>

@protocol CNUIDefaultUserActionRecorderEventFactory;
@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder> {

	CRRecentContactsLibrary* _library;
	id<CNUIDefaultUserActionRecorderEventFactory> _eventFactory;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * library;                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) id<CNUIDefaultUserActionRecorderEventFactory> eventFactory;              //@synthesize eventFactory=_eventFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRRecentContactsLibrary *)library;
-(id)init;
-(void)recordUserAction:(id)arg1 ;
-(id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2 ;
-(id<CNUIDefaultUserActionRecorderEventFactory>)eventFactory;
@end
