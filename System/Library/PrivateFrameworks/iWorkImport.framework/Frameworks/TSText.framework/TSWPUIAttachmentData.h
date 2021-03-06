/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSText/TSText-Structs.h>
@class TSWPUIGraphicalAttachment;

@interface TSWPUIAttachmentData : NSObject {

	TSWPUIGraphicalAttachment* _attachment;
	long long _charIndex;
	CGPoint _location;

}

@property (nonatomic,readonly) TSWPUIGraphicalAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) CGPoint location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long charIndex;                                 //@synthesize charIndex=_charIndex - In the implementation block
-(TSWPUIGraphicalAttachment *)attachment;
-(CGPoint)location;
-(long long)charIndex;
-(id)initWithAttachment:(id)arg1 location:(CGPoint)arg2 charIndex:(long long)arg3 ;
-(void)adjustAlignmentBy:(double)arg1 ;
@end

