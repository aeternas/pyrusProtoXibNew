//
//  TableWindow.h
//  pyrusProtoXibNew
//
//  Created by AIR on 30.09.15.
//  Copyright © 2015 Ivan Golikov. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TableWindow : NSWindow <NSTableViewDataSource, NSTableViewDelegate>

{
    __weak IBOutlet NSTableView *tableList;
    
}

@end
