/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFLAbstractRanker, NFLAbstractCellSizer, NFLAbstractCellPropertyProvider;

@interface NFLCellGenerator : NSObject {

	Class _headlineTemplateClass;
	NFLAbstractRanker* _ranker;
	NFLAbstractCellSizer* _sizer;
	NFLAbstractCellPropertyProvider* _propertyProvider;

}

@property (assign,nonatomic) Class headlineTemplateClass;                                       //@synthesize headlineTemplateClass=_headlineTemplateClass - In the implementation block
@property (nonatomic,readonly) NFLAbstractRanker * ranker;                                      //@synthesize ranker=_ranker - In the implementation block
@property (nonatomic,readonly) NFLAbstractCellSizer * sizer;                                    //@synthesize sizer=_sizer - In the implementation block
@property (nonatomic,readonly) NFLAbstractCellPropertyProvider * propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
-(Class)headlineTemplateClass;
-(NFLAbstractCellSizer *)sizer;
-(id)rankedLayoutsForTileInfo:(id)arg1 feedTemplate:(id)arg2 columnSpan:(unsigned long long)arg3 showAccessoryText:(BOOL)arg4 ;
-(void)setHeadlineTemplateClass:(Class)arg1 ;
-(NFLAbstractRanker *)ranker;
-(NFLAbstractCellPropertyProvider *)propertyProvider;
-(id)initWithSizer:(id)arg1 ranker:(id)arg2 propertyProvider:(id)arg3 ;
@end
