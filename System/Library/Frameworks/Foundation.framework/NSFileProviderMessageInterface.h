/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _itemIdentifier;
	NSString* _providerIdentifier;

}

@property (copy) NSString * itemIdentifier;                  //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end
