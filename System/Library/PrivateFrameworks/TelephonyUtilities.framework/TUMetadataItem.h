/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TUMetadataItem : NSObject {

	NSMutableDictionary* _callMetadata;

}

@property (nonatomic,readonly) NSMutableDictionary * callMetadata;              //@synthesize callMetadata=_callMetadata - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(BOOL)isEmpty;
-(id)init;
-(NSMutableDictionary *)callMetadata;
-(id)description;
-(id)metadataForProvider:(Class)arg1 ;
-(void)setMetadata:(id)arg1 forProvider:(Class)arg2 ;
@end
