/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFTagFactory : NSObject {

	NSMutableDictionary* sharedTags;

}
+(id)defaultFactory;
+(id)tagsForWebpage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tagWithClass:(Class)arg1 webpage:(id)arg2 ;
@end

