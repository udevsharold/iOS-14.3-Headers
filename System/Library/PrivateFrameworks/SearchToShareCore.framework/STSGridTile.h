/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface STSGridTile : NSObject {

	NSArray* _smallIndexes;
	NSNumber* _largeIndex;
	long long _layoutStyle;

}

@property (nonatomic,copy) NSArray * smallIndexes;               //@synthesize smallIndexes=_smallIndexes - In the implementation block
@property (nonatomic,retain) NSNumber * largeIndex;              //@synthesize largeIndex=_largeIndex - In the implementation block
@property (assign,nonatomic) long long layoutStyle;              //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(id)description;
-(NSNumber *)largeIndex;
-(NSArray *)smallIndexes;
-(void)setSmallIndexes:(NSArray *)arg1 ;
-(void)setLargeIndex:(NSNumber *)arg1 ;
@end

