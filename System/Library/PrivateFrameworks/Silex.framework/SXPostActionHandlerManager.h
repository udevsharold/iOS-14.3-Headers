/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXPostActionHandlerManager.h>

@protocol SXPostActionHandlerManager <NSObject,SXPostActionHandler>
@required
-(void)addPostActionHandler:(id)arg1 forActionType:(id)arg2;
-(void)addPostActionHandler:(id)arg1 forActionType:(id)arg2;
-(void)removePostActionHandler:(id)arg1 forActionType:(id)arg2;
-(void)removePostActionHandler:(id)arg1 forActionType:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface SXPostActionHandlerManager : NSObject <SXPostActionHandlerManager> {

	NSMutableDictionary* _postActionHandlers;

}

@property (nonatomic,readonly) NSMutableDictionary * postActionHandlers;              //@synthesize postActionHandlers=_postActionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)handledAction:(id)arg1 state:(unsigned long long)arg2 ;
-(void)addPostActionHandler:(id)arg1 forActionType:(id)arg2 ;
-(void)removePostActionHandler:(id)arg1 forActionType:(id)arg2 ;
-(NSMutableDictionary *)postActionHandlers;
@end
