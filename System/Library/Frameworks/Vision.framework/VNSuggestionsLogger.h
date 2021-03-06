/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNClusteringLogger.h>

@interface VNSuggestionsLogger : VNClusteringLogger
-(void)logString:(id)arg1 ;
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 ;
-(void)logInputFaceIdsWithFlags:(id)arg1 ;
-(void)logSuggestons:(id)arg1 description:(id)arg2 ;
-(void)logAllSuggestons:(id)arg1 ;
-(void)logFilteredByInputQuerySuggestons:(id)arg1 ;
-(void)logConnectedGroups:(id)arg1 ;
-(void)logFinalSuggestionsList:(id)arg1 ;
@end

