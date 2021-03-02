/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCSBusinessLinkContentItemDescribing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCSBusinessLinkContentItemModel : NSObject <BSDescriptionProviding, BCSBusinessLinkContentItemDescribing, NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _language;
	BOOL _isDefault;

}

@property (getter=isDefault,nonatomic,readonly) BOOL isDefault; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(BOOL)isDefault;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBusinessLinkContent:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 isDefault:(BOOL)arg4 ;
@end
