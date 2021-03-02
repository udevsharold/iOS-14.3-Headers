/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber, NSMutableArray, NSDictionary;

@interface UARPSuperBinaryMetaDataTable : NSObject {

	NSURL* _plist;
	NSNumber* _formatVersion;
	NSMutableArray* _values;
	NSDictionary* _dict;

}

@property (readonly) NSNumber * formatVersion;              //@synthesize formatVersion=_formatVersion - In the implementation block
@property (readonly) NSDictionary * dict;                   //@synthesize dict=_dict - In the implementation block
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)dict;
-(id)initWithPlist:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)formatVersion;
-(void)addAppleSpecificTLVs;
-(void)addHostSpecificTLVs;
-(void)addAppleSpecificTLVs2;
-(void)addHostSpecificTLVs2;
-(id)initAppleSpecificWithFormatVersion:(id)arg1 ;
-(id)initVendorAgnosticWithFormatVersion:(id)arg1 ;
-(BOOL)expandPlist:(id*)arg1 ;
-(id)tlvWithKey:(id)arg1 keyValue:(id)arg2 payloadsURL:(id)arg3 error:(id*)arg4 ;
@end
