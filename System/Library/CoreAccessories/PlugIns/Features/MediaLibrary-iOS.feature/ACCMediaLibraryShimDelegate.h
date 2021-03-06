/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ACCMediaLibraryProvider;


@protocol ACCMediaLibraryShimDelegate <NSObject>
@property (nonatomic,readonly) ACCMediaLibraryProvider * provider; 
@required
-(void)notify:(id)arg1 stateChange:(int)arg2 enabled:(BOOL)arg3;
-(void)notifyAvailableLibraries:(id)arg1;
-(ACCMediaLibraryProvider *)provider;

@end

