/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNInhibitor.h>

@protocol OS_os_transaction;
@class NSString, NSObject;

@interface _CNOSTransactionInhibitor : CNInhibitor {

	NSString* _label;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,copy,readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(id)initWithLabel:(id)arg1 ;
-(void)start;
-(NSObject*<OS_os_transaction>)transaction;
-(NSString *)label;
-(void)stop;
@end
