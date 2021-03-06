/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXAnalyticsEvent.h>
#import <libobjc.A.dylib/SXPostActionHandler.h>
#import <libobjc.A.dylib/SXComponentActionHandler.h>

@protocol SXComponentActionHandler <NSObject>
@required
-(void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 invocationType:(unsigned long long)arg4;

@end


@protocol SXActionManager, SXActionSerializer, SXAnalyticsReportingProvider;
@class NSString;

@interface SXComponentActionHandler : SXAnalyticsEvent <SXPostActionHandler, SXComponentActionHandler> {

	id<SXActionManager> _actionManager;
	id<SXActionSerializer> _actionSerializer;
	id<SXAnalyticsReportingProvider> _analyticsReportingProvider;

}

@property (nonatomic,readonly) id<SXActionManager> actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) id<SXActionSerializer> actionSerializer;                                  //@synthesize actionSerializer=_actionSerializer - In the implementation block
@property (nonatomic,readonly) id<SXAnalyticsReportingProvider> analyticsReportingProvider;              //@synthesize analyticsReportingProvider=_analyticsReportingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAction:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 invocationType:(unsigned long long)arg4 ;
-(void)handledAction:(id)arg1 state:(unsigned long long)arg2 ;
-(id<SXAnalyticsReportingProvider>)analyticsReportingProvider;
-(id<SXActionSerializer>)actionSerializer;
-(id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3 ;
-(id<SXActionManager>)actionManager;
@end

