/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HFItemProvider, NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider {

	HFItemProvider* _sourceProvider;
	/*^block*/id _transformationBlock;
	NSMutableDictionary* _transformedItems;

}

@property (nonatomic,retain) HFItemProvider * sourceProvider;                     //@synthesize sourceProvider=_sourceProvider - In the implementation block
@property (nonatomic,copy) id transformationBlock;                                //@synthesize transformationBlock=_transformationBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transformedItems;              //@synthesize transformedItems=_transformedItems - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)initWithSourceProvider:(id)arg1 transformationBlock:(/*^block*/id)arg2 ;
-(id)transformationBlock;
-(NSMutableDictionary *)transformedItems;
-(void)setTransformationBlock:(id)arg1 ;
-(void)setTransformedItems:(NSMutableDictionary *)arg1 ;
-(HFItemProvider *)sourceProvider;
-(id)invalidationReasons;
-(void)setSourceProvider:(HFItemProvider *)arg1 ;
-(id)reloadItems;
@end
