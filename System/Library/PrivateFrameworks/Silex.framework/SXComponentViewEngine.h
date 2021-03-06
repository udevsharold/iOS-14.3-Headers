/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentViewEngine.h>

@protocol SXComponentViewEngine <NSObject>
@required
-(void)removeFactory:(id)arg1;
-(void)removeFactory:(id)arg1;
-(id)componentViewForComponent:(id)arg1;
-(id)componentViewForComponent:(id)arg1;
-(void)addFactory:(id)arg1;
-(void)addFactory:(id)arg1;

@end


@protocol SXComponentViewPostProcessorManager;
@class SXComponentTypeMatching, NSString;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine> {

	SXComponentTypeMatching* _factoryMatching;
	id<SXComponentViewPostProcessorManager> _postProcessorManager;

}

@property (nonatomic,readonly) SXComponentTypeMatching * factoryMatching;                                 //@synthesize factoryMatching=_factoryMatching - In the implementation block
@property (nonatomic,readonly) id<SXComponentViewPostProcessorManager> postProcessorManager;              //@synthesize postProcessorManager=_postProcessorManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXComponentTypeMatching *)factoryMatching;
-(void)removeFactory:(id)arg1 ;
-(id)componentViewForComponent:(id)arg1 ;
-(id)initWithPostProcessorManager:(id)arg1 ;
-(void)addFactory:(id)arg1 ;
-(id<SXComponentViewPostProcessorManager>)postProcessorManager;
@end

