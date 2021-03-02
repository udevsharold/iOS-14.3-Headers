/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXComponentInteractionHandler;
@class SXComponentView;

@interface SXComponentInteraction : NSObject {

	SXComponentView* _componentView;
	id<SXComponentInteractionHandler> _handler;
	unsigned long long _types;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;                 //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long types;                               //@synthesize types=_types - In the implementation block
-(id<SXComponentInteractionHandler>)handler;
-(unsigned long long)types;
-(SXComponentView *)componentView;
-(id)initWithComponentView:(id)arg1 handler:(id)arg2 types:(unsigned long long)arg3 ;
-(BOOL)handlesType:(unsigned long long)arg1 ;
@end
