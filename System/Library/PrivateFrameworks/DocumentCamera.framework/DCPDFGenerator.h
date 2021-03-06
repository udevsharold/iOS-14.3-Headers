/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DocumentCamera/DocumentCamera-Structs.h>
@class NSURL, NSString, NSMutableData;

@interface DCPDFGenerator : NSObject {

	CGContextRef _pdfContext;
	NSURL* _fileURL;
	NSString* _title;
	NSMutableData* _data;
	CGRect _pageRect;

}

@property (nonatomic,copy) NSURL * fileURL;                     //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) CGRect pageRect;                   //@synthesize pageRect=_pageRect - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setPageRect:(CGRect)arg1 ;
-(void)finishGenerating;
-(id)init;
-(void)addPageWithPageRect:(CGRect)arg1 renderBlock:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(id)initWithMutableData:(id)arg1 pageRect:(CGRect)arg2 title:(id)arg3 ;
-(void)addPageWithRenderBlock:(/*^block*/id)arg1 ;
-(NSMutableData *)data;
-(void)dealloc;
-(NSURL *)fileURL;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGRect)pageRect;
-(BOOL)startGenerating;
-(NSString *)title;
-(NSURL *)url;
@end

