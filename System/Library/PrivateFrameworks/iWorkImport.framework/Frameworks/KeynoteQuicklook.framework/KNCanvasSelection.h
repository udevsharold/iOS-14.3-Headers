/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDCanvasSelection.h>

@class NSSet;

@interface KNCanvasSelection : TSDCanvasSelection {

	NSSet* _buildChunks;

}

@property (nonatomic,retain) NSSet * buildChunks;                                                     //@synthesize buildChunks=_buildChunks - In the implementation block
@property (nonatomic,readonly) NSSet * unlockedDrawableInfos; 
@property (nonatomic,readonly) NSSet * drawableInfos; 
@property (nonatomic,readonly) NSSet * unlockedInfosSupportingHyperlinkActions; 
@property (nonatomic,readonly) BOOL containsOnlyUnlockedInfosSupportingHyperlinkActions; 
+(Class)archivedSelectionClass;
+(id)emptySelection;
-(id)subclassDescription;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInfos:(id)arg1 ;
-(NSSet *)buildChunks;
-(id)UUIDDescription;
-(id)initWithPersistableInfos:(id)arg1 drawableToActionGhostIndexPromiseMap:(id)arg2 buildChunks:(id)arg3 ;
-(id)initWithInfos:(id)arg1 buildChunks:(id)arg2 ;
-(id)p_drawablesWithoutPromisesInDrawableToActionGhostIndexPromiseMap:(id)arg1 ;
-(NSSet *)unlockedInfosSupportingHyperlinkActions;
-(id)copyExcludingBuildChunks:(id)arg1 ;
-(id)copyReplacingChunksWithChunks:(id)arg1 ;
-(BOOL)containsBuildChunksOfAnimationType:(long long)arg1 ;
-(BOOL)containsOnlyUnlockedInfosSupportingHyperlinkActions;
-(NSSet *)unlockedDrawableInfos;
-(NSSet *)drawableInfos;
-(void)setBuildChunks:(NSSet *)arg1 ;
@end

