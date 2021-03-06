/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying> {

	BOOL _shouldBadge;
	long long _type;
	NSURL* _layoutBundleURL;
	NSArray* _supportedLocalizations;
	long long _priority;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * layoutBundleURL;                         //@synthesize layoutBundleURL=_layoutBundleURL - In the implementation block
@property (nonatomic,retain) NSArray * supportedLocalizations;              //@synthesize supportedLocalizations=_supportedLocalizations - In the implementation block
@property (assign,nonatomic) BOOL shouldBadge;                              //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) long long priority;                            //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPriority:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(BOOL)shouldBadge;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)setShouldBadge:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(NSURL *)layoutBundleURL;
-(void)updateWithDiscoveryItem:(id)arg1 ;
-(void)setLayoutBundleURL:(NSURL *)arg1 ;
-(void)setSupportedLocalizations:(NSArray *)arg1 ;
-(NSArray *)supportedLocalizations;
-(long long)priority;
-(void)encodeWithCoder:(id)arg1 ;
@end

