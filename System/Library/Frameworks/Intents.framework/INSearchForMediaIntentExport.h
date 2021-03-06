/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INMediaSearch, INPrivateSearchForMediaIntentData;


@protocol INSearchForMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) INPrivateSearchForMediaIntentData * privateSearchForMediaIntentData; 
@required
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(id)init;
-(INPrivateSearchForMediaIntentData *)privateSearchForMediaIntentData;
-(void)setPrivateSearchForMediaIntentData:(id)arg1;
-(NSArray *)mediaItems;

@end

