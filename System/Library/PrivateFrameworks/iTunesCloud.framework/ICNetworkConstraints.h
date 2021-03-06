/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {

	BOOL _dataAllowedFallbackValue;
	BOOL _cellularDataAllowedFallbackValue;
	BOOL _wiFiDataAllowedFallbackValue;
	NSMutableDictionary* _networkTypeToDataAllowed;
	NSMutableDictionary* _networkTypeToSizeLimit;

}
+(id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1 ;
+(id)constraintsForSystemApplicationType:(long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sizeLimitForNetworkType:(long long)arg1 ;
-(BOOL)shouldAllowDataForWiFiNetworkTypes;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(BOOL)shouldAllowDataForNetworkType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldAllowDataForCellularNetworkTypes;
@end

