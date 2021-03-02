/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSMapTable;


@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations; 
@required
-(NSArray *)outputProtocols;
-(void)setInputOperations:(id)arg1;
-(NSMapTable *)inputOperations;
-(NSArray *)inputProtocols;

@end
