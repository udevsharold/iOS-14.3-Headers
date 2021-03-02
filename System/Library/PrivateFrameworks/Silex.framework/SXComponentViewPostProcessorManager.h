/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentViewPostProcessorManager.h>

@protocol SXComponentViewPostProcessorManager <NSObject>
@required
-(void)addProcessor:(id)arg1;
-(void)removeProcessor:(id)arg1;
-(void)processComponent:(id)arg1 view:(id)arg2;

@end


@class NSMutableArray, NSString;

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager> {

	NSMutableArray* _processors;

}

@property (nonatomic,readonly) NSMutableArray * processors;              //@synthesize processors=_processors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addProcessor:(id)arg1 ;
-(void)removeProcessor:(id)arg1 ;
-(void)processComponent:(id)arg1 view:(id)arg2 ;
-(NSMutableArray *)processors;
@end
