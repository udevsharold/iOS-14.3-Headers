/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUMetadataCache;

@interface TUMetadataClientController : NSObject {

	TUMetadataCache* _metadataCache;

}

@property (nonatomic,retain) TUMetadataCache * metadataCache;              //@synthesize metadataCache=_metadataCache - In the implementation block
+(id)sharedInstance;
-(id)locationForSearchItem:(id)arg1 ;
-(id)init;
-(TUMetadataCache *)metadataCache;
-(void)updateMetadataForDestinationID:(id)arg1 ;
-(void)updateMetadataForCall:(id)arg1 ;
-(id)suggestionForSearchItem:(id)arg1 ;
-(id)locationForDestinationID:(id)arg1 ;
-(id)_metadataDestinationIdForSearchItem:(id)arg1 ;
-(id)directoryLabelForDestinationID:(id)arg1 ;
-(void)updateMetadataForRecentCalls:(id)arg1 ;
-(id)suggestionForDestinationID:(id)arg1 ;
-(void)setMetadataCache:(TUMetadataCache *)arg1 ;
-(id)directoryLabelForSearchItem:(id)arg1 ;
@end

