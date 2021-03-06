/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreRadioStreamAssetInfo, NSURL;

@interface MPStoreRadioStreamAssetInfo : NSObject {

	ICStoreRadioStreamAssetInfo* _internalInfo;
	BOOL _iTunesStoreStream;

}

@property (nonatomic,readonly) long long flavor; 
@property (nonatomic,readonly) long long streamProtocol; 
@property (nonatomic,copy,readonly) NSURL * streamURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize iTunesStoreStream=_iTunesStoreStream - In the implementation block
-(BOOL)isiTunesStoreStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
-(long long)flavor;
-(NSURL *)streamURL;
-(long long)streamProtocol;
-(id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1 ;
-(BOOL)isITunesStoreStream;
-(long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1 ;
-(long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1 ;
@end

