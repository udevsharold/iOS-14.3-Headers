/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@interface CADisplayAttributes : NSObject {

	EDIDAttributes _edid_attributes;

}

@property (readonly) long long dolbyVision; 
@property (readonly) long long pqEOTF; 
@property (readonly) long long hdrStaticMetadataType1; 
@property (readonly) long long bt2020YCC; 
@property (readonly) BOOL legacyHDMIEDID; 
@property (readonly) unsigned manufacturerID; 
@property (readonly) unsigned productID; 
@property (readonly) unsigned weekOfManufacture; 
@property (readonly) unsigned yearOfManufacture; 
@property (readonly) unsigned serialNumber; 
-(unsigned)productID;
-(long long)pqEOTF;
-(unsigned)serialNumber;
-(long long)bt2020YCC;
-(long long)dolbyVision;
-(id)_initWithAttributes:(EDIDAttributes)arg1 ;
-(long long)hdrStaticMetadataType1;
-(BOOL)legacyHDMIEDID;
-(unsigned)manufacturerID;
-(unsigned)weekOfManufacture;
-(unsigned)yearOfManufacture;
@end

