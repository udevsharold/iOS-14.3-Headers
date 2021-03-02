/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPlugInQuery.h>

@class NSDictionary, NSArray;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {

	NSDictionary* _queryDict;
	NSArray* _extensionIdentifiers;
	NSArray* _extensionPointIdentifiers;
	/*^block*/id _filterBlock;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_queryDictionary;
-(id)_initWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(BOOL)matchesPlugin:(unsigned)arg1 pluginData:(const LSPluginData*)arg2 withDatabase:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
