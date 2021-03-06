/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitorPrivate.h>

@class CNSaveRequest, NSMutableArray, NSArray, NSString;

@interface CNSaveRequestContactIdentifierCollector : NSObject <CNChangeHistoryEventVisitorPrivate> {

	CNSaveRequest* _request;
	NSMutableArray* _allIdentifiers;
	NSMutableArray* _insertedIdentifiers;

}

@property (readonly) CNSaveRequest * request;                           //@synthesize request=_request - In the implementation block
@property (readonly) NSMutableArray * allIdentifiers;                   //@synthesize allIdentifiers=_allIdentifiers - In the implementation block
@property (readonly) NSMutableArray * insertedIdentifiers;              //@synthesize insertedIdentifiers=_insertedIdentifiers - In the implementation block
@property (readonly) NSArray * allContactIdentifiers; 
@property (readonly) NSArray * insertedContactIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSaveRequest:(id)arg1 ;
-(void)collectIdentifiers;
-(NSArray *)insertedContactIdentifiers;
-(NSMutableArray *)insertedIdentifiers;
-(CNSaveRequest *)request;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitLinkContactsEvent:(id)arg1 ;
-(void)visitUnlinkContactEvent:(id)arg1 ;
-(void)visitPreferredContactForNameEvent:(id)arg1 ;
-(void)visitPreferredContactForImageEvent:(id)arg1 ;
-(void)visitDifferentMeCardEvent:(id)arg1 ;
-(NSMutableArray *)allIdentifiers;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(NSArray *)allContactIdentifiers;
-(void)visitUpdateContactEvent:(id)arg1 ;
@end

