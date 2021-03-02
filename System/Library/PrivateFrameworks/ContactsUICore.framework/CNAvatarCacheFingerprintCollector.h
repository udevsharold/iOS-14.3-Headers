/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSMutableOrderedSet, NSArray, NSString;

@interface CNAvatarCacheFingerprintCollector : NSObject <CNChangeHistoryEventVisitor> {

	NSMutableOrderedSet* _fingerprints;

}

@property (nonatomic,copy,readonly) NSArray * fingerprintsOfAffectedContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(NSArray *)fingerprintsOfAffectedContacts;
@end
