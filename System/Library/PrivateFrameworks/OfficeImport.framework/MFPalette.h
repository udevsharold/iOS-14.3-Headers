/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFObject.h>

@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {

	NSMutableArray* m_colours;

}
+(id)paletteWithColours:(id)arg1 ;
-(id)init;
-(BOOL)resize:(int)arg1 ;
-(int)selectInto:(id)arg1 ;
-(id)initWithColours:(id)arg1 ;
-(BOOL)setEntries:(int)arg1 in_colours:(id)arg2 ;
-(id)getColour:(int)arg1 ;
@end
