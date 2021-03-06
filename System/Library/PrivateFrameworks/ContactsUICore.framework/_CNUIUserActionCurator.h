/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionCurator.h>

@protocol CNLSApplicationWorkspace;
@class CNContactStore, NSString;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator> {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(id)curateUserAction:(id)arg1 ;
@end

