/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionPreferredSizingCustomizations : NSObject {

	unordered_map<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, _UICollectionAuxillaryCustomization> > >* _kindToCustomizationMap;
	unsigned long long _selectionGrouping;

}

@property (assign,nonatomic) unsigned long long selectionGrouping;              //@synthesize selectionGrouping=_selectionGrouping - In the implementation block
-(unsigned long long)hash;
-(NSDirectionalEdgeInsets)insetsForElementKind:(id)arg1 customized:(out BOOL*)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInsets:(NSDirectionalEdgeInsets)arg1 forElementKind:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 forElementKind:(id)arg2 ;
-(void)setSelectionGrouping:(unsigned long long)arg1 ;
-(unsigned long long)selectionGrouping;
-(BOOL)elementKindIsHidden:(id)arg1 customized:(out BOOL*)arg2 ;
@end
