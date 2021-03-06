/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject {

	NSDictionary* _itemResponseDictionary;
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)flavor;
-(long long)ICStoreRadioStreamFlavorWithString:(id)arg1 ;
-(long long)ICStoreRadioStreamProtocolWithString:(id)arg1 ;
-(NSURL *)streamURL;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(long long)streamProtocol;
@end

