/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFDiffableItemGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFItemSectionAccessoryButtonHeaderDelegate;
@class NSString, NSArray, NSAttributedString, NSDictionary;

@interface HFItemSection : NSObject <HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable> {

	NSString* _identifier;
	NSString* _headerTitle;
	NSString* _headerAccessoryButtonTitle;
	id<HFItemSectionAccessoryButtonHeaderDelegate> _headerAccessoryButtonDelegate;
	NSString* _footerTitle;
	NSAttributedString* _attributedFooterTitle;
	NSDictionary* _userInfo;
	NSArray* _items;

}

@property (nonatomic,copy) NSString * headerTitle;                                                                             //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * headerAccessoryButtonTitle;                                                              //@synthesize headerAccessoryButtonTitle=_headerAccessoryButtonTitle - In the implementation block
@property (assign,nonatomic,__weak) id<HFItemSectionAccessoryButtonHeaderDelegate> headerAccessoryButtonDelegate;              //@synthesize headerAccessoryButtonDelegate=_headerAccessoryButtonDelegate - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;                                                                             //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedFooterTitle;                                                         //@synthesize attributedFooterTitle=_attributedFooterTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                                                    //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy,readonly) NSArray * diffableItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)itemResultManualSortComparator;
+(id)filterSections:(id)arg1 toDisplayedItems:(id)arg2 ;
+(id)na_identity;
+(/*^block*/id)defaultItemComparator;
-(NSString *)groupIdentifier;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)headerTitle;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSDictionary *)userInfo;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(NSString *)footerTitle;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFooterTitle:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)headerAccessoryButtonTitle;
-(void)setHeaderAccessoryButtonTitle:(NSString *)arg1 ;
-(id<HFItemSectionAccessoryButtonHeaderDelegate>)headerAccessoryButtonDelegate;
-(void)setHeaderAccessoryButtonDelegate:(id<HFItemSectionAccessoryButtonHeaderDelegate>)arg1 ;
-(NSAttributedString *)attributedFooterTitle;
-(void)setAttributedFooterTitle:(NSAttributedString *)arg1 ;
-(id)_createCopyMutable:(BOOL)arg1 ;
-(NSArray *)diffableItems;
@end

