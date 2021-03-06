/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, VUIRouterDataSource, IKViewElement;

@interface VUIViewElementDataSource : NSObject {

	NSDictionary* _dataDictionary;
	VUIRouterDataSource* _routerDataSource;
	IKViewElement* _viewElement;

}

@property (nonatomic,copy) NSDictionary * dataDictionary;                         //@synthesize dataDictionary=_dataDictionary - In the implementation block
@property (nonatomic,retain) VUIRouterDataSource * routerDataSource;              //@synthesize routerDataSource=_routerDataSource - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * viewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(NSDictionary *)dataDictionary;
-(id)initWithDataDictionary:(id)arg1 viewElement:(id)arg2 ;
-(VUIRouterDataSource *)routerDataSource;
-(void)setDataDictionary:(NSDictionary *)arg1 ;
-(void)setRouterDataSource:(VUIRouterDataSource *)arg1 ;
@end

