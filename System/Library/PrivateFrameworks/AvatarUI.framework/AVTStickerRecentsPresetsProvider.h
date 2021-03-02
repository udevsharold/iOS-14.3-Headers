/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVTStickerRecentsPresetsProvider : NSObject
+(id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3 ;
+(id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2 ;
+(id)presetsGivenOneMemojiWithIdentifier:(id)arg1 ;
+(id)presetsGivenNoMemoji;
+(void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 avatarStore:(id)arg3 numberOfStickers:(long long)arg4 resultBlock:(/*^block*/id)arg5 ;
@end
