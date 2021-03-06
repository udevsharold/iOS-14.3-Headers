/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BannerKit-Structs.h>
#import <BannerKit/BNPresentableIdentification.h>
#import <libobjc.A.dylib/BNPresentableSpecifying.h>

@class NSUUID, NSString;

@interface BNBannerSourcePresentableSpecification : BNPresentableIdentification <BNPresentableSpecifying> {

	long long _presentableType;
	CGSize _preferredContentSize;
	UIEdgeInsets _contentOutsets;

}

@property (assign,nonatomic) long long presentableType;                          //@synthesize presentableType=_presentableType - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                        //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentOutsets;                        //@synthesize contentOutsets=_contentOutsets - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBSXPCCoder:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(NSString *)description;
-(long long)presentableType;
-(void)setPresentableType:(long long)arg1 ;
-(void)setContentOutsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentOutsets;
@end

