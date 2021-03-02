/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INMediaSearch, INMediaDestination, INPrivateAddMediaIntentData;


@protocol INAddMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) INMediaDestination * mediaDestination; 
@property (nonatomic,copy) INPrivateAddMediaIntentData * privateAddMediaIntentData; 
@required
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(id)init;
-(INMediaDestination *)mediaDestination;
-(void)setMediaDestination:(id)arg1;
-(INPrivateAddMediaIntentData *)privateAddMediaIntentData;
-(void)setPrivateAddMediaIntentData:(id)arg1;
-(NSArray *)mediaItems;

@end
